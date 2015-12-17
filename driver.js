var str = "boundary";
var ary = str.split('');
var newAry = ary.reverse();
var newString = newAry.join('');

if (newString == str){
	document.write("true");
}
