

var Observable = require("FuseJS/Observable");
var GeoLocation = require("FuseJS/GeoLocation");

/**************SEND INFORMATION ****************************************/
var urlRest = "http://uapi.dripdoctors.com/sendNurseLocation";
var appKey ="8fd4a98328b90dc0f4533ebe4d269b22";
var nurseId ="1";


// Immediate
var immediateLocation = JSON.stringify(GeoLocation.location);

// Timeout
var timeoutLocation = Observable("");
// Continuous
var continuousLocation = Observable("");
var timeoutMs = 5000;


	GeoLocation.getLocation(timeoutMs)
		.then(function(location) {

			timeoutLocation.value = JSON.stringify(location);
	});
	

	GeoLocation.onChanged = function(location) {

		continuousLocation.value = JSON.stringify(location);
	};


	function startContinuousListener() {

		var intervalMs = 1000;
		var desiredAccuracyInMeters = 10;

		GeoLocation.startListening(intervalMs, desiredAccuracyInMeters);		
	}


	var sendRest = function sendNurse(){

		fetch(urlRest, {

			    method: 'POST',
			    headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
			    body: 'key='+appKey+'&nurseId='+nurseId+'&geostring='+GeoLocation.getLocation+''
			   
			   
		});

		setTimeout(sendNurse,3000);

	}


	function stopContinuousListener() {
		GeoLocation.stopListening();
	}




module.exports = {

	immediateLocation: immediateLocation,
	timeoutLocation: timeoutLocation,
	continuousLocation: continuousLocation,
	
	startContinuousListener: startContinuousListener,
	stopContinuousListener: stopContinuousListener,

	
};