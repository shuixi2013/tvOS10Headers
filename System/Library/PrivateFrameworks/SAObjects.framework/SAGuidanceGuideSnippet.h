/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut, NSArray, NSString;

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (nonatomic,retain) SAUIAppPunchOut * appStorePunchOut; 
@property (nonatomic,copy) NSArray * domainSnippets; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,copy) NSArray * intentEnabledAppSnippets; 
+(id)guideSnippet;
+(id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appStorePunchOut;
-(void)setAppStorePunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)domainSnippets;
-(void)setDomainSnippets:(NSArray *)arg1 ;
-(NSArray *)intentEnabledAppSnippets;
-(void)setIntentEnabledAppSnippets:(NSArray *)arg1 ;
@end

