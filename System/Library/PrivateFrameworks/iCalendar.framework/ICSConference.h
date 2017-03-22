/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(NSString *)info;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(NSString *)feature;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setFeature:(NSString *)arg1 ;
@end

