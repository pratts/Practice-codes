# mysql-munin
The mysql plugins for munin

This project consists of mysql plugins that show the realtime data to monitor mysql.
Currently the munin mysql plugins display data by spreading it over the uptime and
that can provide the data distributed over the overall uptime of the mysql database.
This plugin saves the current data in a temporary file and fetches the mysql data after
the munin cron runs and shows the difference during the duration of previous time and
current time.

Currently provided plugins :
1.	Mysql Select, Insert, Update, Delete

Installation : 
1. Copy the fetch_mysql file in /usr/share/munin/plugins folder. 

	(cp fetch_mysql /usr/share/munin/plugins)
2. Create a symlink of the copied file in the folder /etc/munin/plugins. 

	(ln -s /usr/share/munin/plugins/fetch_mysql /etc/munin/plugins)
3. Copy the following content in the file /etc/munin/plugin-conf.d/munin-node
	
	[fetch_mysql]
	
	env.mysqlopts -uusername
4. Restart munin-node
	
	systemctl restart munin-node

NOTE:
Tested with mysql version 5.7.18.
