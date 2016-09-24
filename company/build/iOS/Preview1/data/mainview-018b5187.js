var Observable = require('FuseJS/Observable');

var metodo = "POST"; 
var url = "http://localhost/api-rest/apiEmpresa/insertEmpresa";
var idCompany = Observable("");
var idState = Observable("");
var nameCompany = Observable("");
var emailCompany = Observable("");
var telCompany = Observable("");
var dirCompany = Observable("");
var error = Observable("");



function insertarEmpresaForGet(){

}

function insertarEmpresaForPost(){

	if(idCompany.value != "" && isState.value != ""){

		if(nameCompany.value != "" && emailCompany.value != ""){

			if(telCompany.value != "" && dirCompany.value != ""){

				var body = "idcompany="+idCompany.value+"&idstate="+idState.value+"&namecompany="+nameCompany.value+"&emailcompany="+emailCompany.value+"telephonecompany="+telCompany.value+"&&addresscompany="+dirCompany.value+"";

				fetch(url, {

				    method: metodo,
				    headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
				    body: JSON.stringify(body)
			   
				})
				.then(function(response) { 

                    console.log("1");
                    console.log(JSON.stringify(response));
                    return response.json(); 
                })
                .then(function(responseObject) {

                    console.log("2");
                    console.log(JSON.stringify(responseObject));
                   

                }).catch(function (err) {
                    debug_log('Error: ' + err);
                });

			}

		}

	}else{

		error.value = "no funciono el fetch";

	}

}


module.exports ={ 

	idCompany : idCompany,
	idState : idState,
	nameCompany : nameCompany,
	nameCompany : nameCompany,
	emailCompany : emailCompany,
	telCompany : telCompany,
	dirCompany : dirCompany,
	error : error,
	
	insertarEmpresaForGet : insertarEmpresaForGet,
	insertarEmpresaForPost : insertarEmpresaForPost


};