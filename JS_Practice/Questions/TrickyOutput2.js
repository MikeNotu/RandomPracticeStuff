var hero={
	_name: "Mike Bateman",
	getSecretIdentity: function(){
		return this._name;
	}
};

var stoleSecretIdentity = hero.getSecretIdentity.bind(hero);
// var stoleSecretIdentity = hero.getSecretIdentity;

console.log(stoleSecretIdentity());
console.log(hero.getSecretIdentity());
// console.log(hero.getSecretIdentity());