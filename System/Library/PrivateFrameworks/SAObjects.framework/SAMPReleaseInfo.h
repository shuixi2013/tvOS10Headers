/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * releaseDate; 
@property (assign,nonatomic) long long releaseYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)releaseInfo;
+(id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)releaseYear;
-(void)setReleaseYear:(long long)arg1 ;
-(SACalendar *)releaseDate;
-(void)setReleaseDate:(SACalendar *)arg1 ;
@end

