//
//  NSString+HKWF.h
//  Stock4HKWF
//
//  Created by elvis on 7/11/13.
//  Copyright (c) 2013 HKWF. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ZHiteam)
- (BOOL)isPureInt;

- (BOOL)isPureFloat;

- (NSString*)urlEncode;

-(NSURL*)formateToURL;

-(NSURL*)greenFutureURL;

-(NSString*)greenFutureURLStr;

-(BOOL)isValidateEmail;

-(NSString*)bankNo2NormalString;

-(NSString*)md5;
@end
