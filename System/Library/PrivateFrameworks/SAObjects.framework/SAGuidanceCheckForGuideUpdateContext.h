/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (nonatomic,copy) NSArray * supportedFeatures; 
+(id)checkForGuideUpdateContext;
+(id)checkForGuideUpdateContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)supportedFeatures;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
@end

