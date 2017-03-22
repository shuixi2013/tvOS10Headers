/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying> {

	NSString* _userId;
	NSString* _contentId;
	long long _concernItemType;
	NSString* _commentText;
	NSString* _aucType;
	NSString* _displayText;
	NSString* _concernTypeId;

}

@property (nonatomic,copy) NSString * concernTypeId;                 //@synthesize concernTypeId=_concernTypeId - In the implementation block
@property (nonatomic,copy) NSString * displayText;                   //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * contentId;                     //@synthesize contentId=_contentId - In the implementation block
@property (assign,nonatomic) long long concernItemType;              //@synthesize concernItemType=_concernItemType - In the implementation block
@property (nonatomic,copy) NSString * commentText;                   //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSString * aucType;                       //@synthesize aucType=_aucType - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)contentId;
-(long long)concernItemType;
-(NSString *)concernTypeId;
-(NSString *)aucType;
-(void)setConcernItemType:(long long)arg1 ;
-(void)setConcernTypeId:(NSString *)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setAucType:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)commentText;
@end

