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

@class NSString, NSData;

@interface PQLRawInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(void)initialize;
+(id)rawInjection:(const char*)arg1 length:(unsigned long long)arg2 ;
-(NSString *)description;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
@end
