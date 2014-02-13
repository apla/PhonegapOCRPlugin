//
//  OCRPlugin.h
//  pruebaTesseract
//
//  Created by Admin on 09/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#import <Cordova/CDVPlugin.h>
@class claseAuxiliar;

@interface OCRPlugin : CDVPlugin 

@property (nonatomic, copy) NSString* callbackID;

- (void) recogniseOCR:(CDVInvokedUrlCommand*)command;

@end
