var exec = require("cordova/exec");
var OCRPlugin = {
    callNativeFunction: function (success, fail, resultType) {
        return exec(success, fail, "com.jcesarmobile.OCRPlugin", "recogniseOCR", [resultType]);
    }
};