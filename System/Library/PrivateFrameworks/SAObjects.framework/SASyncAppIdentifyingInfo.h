/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * buildNumber; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifyingInfo;
+(id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
@end

