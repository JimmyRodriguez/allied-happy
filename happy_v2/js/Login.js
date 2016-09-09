var Observable = require("FuseJS/Observable");

var username = Observable("");
var password = Observable("");

var areCredentialsValid = Observable(function() {
return username.value != "" && password.value != "";
});


function goHome() {

	router.goto("home");
}

module.exports = {
	username: username,
	password: password,

	areCredentialsValid: areCredentialsValid,
	goHome : goHome
};