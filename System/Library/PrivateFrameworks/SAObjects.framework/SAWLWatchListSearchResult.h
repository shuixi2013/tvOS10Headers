/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIImageResource, NSDate;

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * network; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSString * shelfType; 
@property (nonatomic,copy) NSString * studio; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListSearchResult;
+(id)watchListSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SAUIImageResource *)image;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)shelfType;
-(void)setShelfType:(NSString *)arg1 ;
-(NSString *)studio;
-(void)setStudio:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(NSString *)contentType;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setNetwork:(NSString *)arg1 ;
-(NSString *)network;
@end
