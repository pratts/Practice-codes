"use strict";

function inherit(p) {
	if (p == null) throw TypeError();
	if (Object.create)
		return Object.create(p);
	var t = typeof p;
	if (t !== "object" && t !== "function") throw TypeError();
	function f() {};
	f.prototype = p;
	return new f();
}
// This function creates a new enumerated type. The argument object specifies
// the names and values of each instance of the class. The return value
// is a constructor function that identifies the new class. Note, however
// that the constructor throws an exception: you can't use it to create new
// instances of the type. The returned constructor has properties that
// map the name of a value to the value itself, and also a values array,
// a foreach() iterator function
function enumeration(namesToValues) {
// This is the dummy constructor function that will be the return value.
    var enumeration = function() { throw "Can't Instantiate Enumerations"; };
    // Enumerated values inherit from this object.
    var proto = enumeration.prototype = {
        constructor: enumeration,
    // Identify type
        toString: function() { return this.name; }, // Return name
        valueOf: function() { return this.value; }, //
        toJSON: function() { return this.name; }
    };
    enumeration.values = [];
    // For serialization
    // An array of the enumerated value objects
    // Now create the instances of this new type.
    for(var name in namesToValues) {
        // For each value
        var e = inherit(proto);
        // Create an object to represent it
        e.name = name;
        // Give it a name
        e.value = namesToValues[name];
        // And a value
        enumeration[name] = e;
        // Make it a property of constructor
        enumeration.values.push(e);
        // And store in the values array
    }
    // A class method for iterating the instances of the class
    enumeration.foreach = function(f,c) {
        for(var i = 0; i < this.values.length; i++) f.call(c,this.values[i]);
    };
    // Return the constructor that identifies the new type
    return enumeration;
}

var Coin = enumeration({Penny: 1, Nickel:5, Dime:10, Quarter:25});
var c = Coin.Dime;
console.log(c);
console.log(c instanceof Coin);
console.log(c.constructor == Coin);
console.log(Coin.Quarter + 3*Coin.Nickel);
console.log(Coin.Dime == 10);
console.log(Coin.Dime > Coin.Nickel);
console.log(String(Coin.Dime) + ":" + Coin.Dime);