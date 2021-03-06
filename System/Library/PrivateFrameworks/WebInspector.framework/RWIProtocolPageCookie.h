/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double expires; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) BOOL httpOnly; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) BOOL session; 
-(int)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)path;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)session;
-(void)setSession:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setExpires:(double)arg1 ;
-(void)setHttpOnly:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 session:(BOOL)arg9 ;
-(BOOL)httpOnly;
-(BOOL)secure;
-(double)expires;
@end

