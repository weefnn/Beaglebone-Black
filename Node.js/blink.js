var bbb = require('bonescript');
var state = bbb.LOW;

bbb.pinMode('USR1', bbb.OUTPUT);
setInterval(blink,1000);
console.log('Hello world!');

function blink() {
	if (state == bbb.LOW) {
		state = bbb.HIGH;
	} else {
		state = bbb.LOW;
	}

	bbb.digitalWrite('USR1', state);
}
