var john = {
	name: 'John',
	yearOfBirth: 1990,
	job: 'teacher'
};

var Person = function(name,
	yearOfBirth, job){
	this.name = name;
	this.yearOfBirth = yearOfBirth;
	this.job = job;
	};

Person.prototype.calculateAge =
function(){
	console.log(2021-
		this.yearOfBirth);
};

Person.prototype.lastName = 'Smith';

var john = new Person('John',1990,'teacher');

//john.calculateAge();

var jane = new Person('Jane',1969, 'designer');

var mark = new Person('Mark',1948, 'retired');

john.calculateAge();
jane.calculateAge();
mark.calculateAge();

console.log(john.lastName);
console.log(jane.lastName);
console.log(mark.lastName);

//john.calculateAge()
