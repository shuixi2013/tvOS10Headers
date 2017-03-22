/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class ICSDateTimeValue;

@interface ICSAlternateTimeProposal : ICSProperty

@property (nonatomic,retain) ICSDateTimeValue * startDate; 
@property (assign,nonatomic) int status; 
+(int)statusFromICSString:(id)arg1 ;
+(id)ICSStringFromAlternateTimeProposalStatus:(int)arg1 ;
+(id)_parseICSString:(id)arg1 ;
+(id)alternateTimeProposalFromICSCString:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(ICSDateTimeValue *)startDate;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setStartDate:(ICSDateTimeValue *)arg1 ;
@end
