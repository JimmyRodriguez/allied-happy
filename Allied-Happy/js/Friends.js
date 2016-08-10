var nextAsk = function irWork(){
	router.goto("work");
}
setTimeout(nextAsk,2000); 

function goWork(){

	router.goto("work");
};

module.exports = {

	goWork : goWork
}