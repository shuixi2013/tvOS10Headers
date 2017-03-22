/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libprequelite.dylib/PQLNameInjectionBase.h>
#import <libobjc.A.dylib/PQLInjecting.h>

@class NSMutableArray, NSString, NSData;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {

	NSMutableArray* _binds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)formatInjection:(id)arg1 ;
-(NSString *)description;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)bindValuesToKeepAlive;
@end

