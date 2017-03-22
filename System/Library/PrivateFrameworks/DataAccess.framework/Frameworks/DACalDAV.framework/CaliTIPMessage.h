/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, CalDAVScheduleChangesProperty, NSString, ICSDocument, ICSEvent, ICSCalendar, NSArray;

@interface CaliTIPMessage : NSObject {

	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;
	NSString* _filename;
	ICSDocument* _document;
	ICSEvent* _event;

}

@property (nonatomic,copy) NSData * data;                                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CalDAVScheduleChangesProperty * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,copy) NSString * filename;                                            //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) ICSDocument * document;                                       //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) ICSEvent * event;                                             //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) ICSCalendar * calendar; 
@property (nonatomic,readonly) ICSEvent * masterEvent; 
@property (nonatomic,readonly) NSArray * occurrences; 
@property (nonatomic,readonly) NSArray * allOccurrences; 
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(ICSEvent *)event;
-(void)setEvent:(ICSEvent *)arg1 ;
-(ICSCalendar *)calendar;
-(ICSDocument *)document;
-(void)setDocument:(ICSDocument *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSArray *)occurrences;
-(void)setScheduleChanges:(CalDAVScheduleChangesProperty *)arg1 ;
-(CalDAVScheduleChangesProperty *)scheduleChanges;
-(id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(ICSEvent *)masterEvent;
-(NSArray *)allOccurrences;
@end

