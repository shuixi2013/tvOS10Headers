/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSURL * articleURL; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)articleURL;
-(void)setArticleURL:(NSURL *)arg1 ;
@end

