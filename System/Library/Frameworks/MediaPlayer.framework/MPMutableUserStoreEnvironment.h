/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreUserEnvironment.h>

@class NSString;

@interface MPMutableUserStoreEnvironment : MPStoreUserEnvironment

@property (assign,nonatomic) unsigned long long accountIdentifier; 
@property (nonatomic,copy) NSString * storeFrontIdentifier; 
@property (nonatomic,copy) NSString * userAgentOverride; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(unsigned long long)arg1 ;
-(void)setUserAgentOverride:(NSString *)arg1 ;
@end

