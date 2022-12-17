/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];
    for(let i=0; i<s.length; i++){
        if("{[(".indexOf(s[i]) >=0){
            stack.push(s[i]);
        }else{
            if("{}|()|[]".indexOf(stack.pop() + s[i]) <0){
                return false;
            }
        }
    }
    return !(stack.length);
};

console.log(isValid("["))