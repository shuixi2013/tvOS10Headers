/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSUUID, NSURL;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic,copy) NSUUID * UUID; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSURL * URL; 
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

