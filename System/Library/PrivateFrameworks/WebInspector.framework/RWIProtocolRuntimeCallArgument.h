/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolJSONObject, NSString;

@interface RWIProtocolRuntimeCallArgument : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * objectId; 
-(RWIProtocolJSONObject *)value;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(void)setObjectId:(NSString *)arg1 ;
-(NSString *)objectId;
@end
