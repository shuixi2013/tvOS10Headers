/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithName:(id)arg1 ;
-(id)_initWithName:(int)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(unsigned long long)outputCount;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)inputCount;
@end

