var nextAsk = function Friends(){
	router.goto("friends");
}
setTimeout(nextAsk,2000); 

function goFriends(){

	router.goto("friends");

};

module.exports = {

	goFriends : goFriends

};