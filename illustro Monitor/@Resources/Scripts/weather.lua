-- @author Funky7Monkey

-- load the http module
function Initialize()
	local http = require("socket.http")
	weather = http.request("http://api.openweathermap.org/data/2.5/weather?zip=27406,us&APPID=ba680b1210ee7cacc29a04de724c8917")
	print(weather)
end
