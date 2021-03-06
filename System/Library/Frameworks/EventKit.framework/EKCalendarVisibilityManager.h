/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKEventStore, CalDarwinNotificationListener, NSArray;

@interface EKCalendarVisibilityManager : NSObject {

	EKEventStore* _eventStore;
	/*^block*/id _visibilityChangedCallback;
	CalDarwinNotificationListener* _notificationListener;

}

@property (nonatomic,retain) EKEventStore * eventStore;                                         //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) id visibilityChangedCallback;                                        //@synthesize visibilityChangedCallback=_visibilityChangedCallback - In the implementation block
@property (nonatomic,retain) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCalendars; 
@property (nonatomic,retain) NSArray * invisibleCalendars; 
+(id)visibilityChangedNotificationName;
-(void)dealloc;
-(id)init;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setVisibilityChangedCallback:(id)arg1 ;
-(id)visibilityChangedCallback;
-(void)setNotificationListener:(CalDarwinNotificationListener *)arg1 ;
-(CalDarwinNotificationListener *)notificationListener;
-(id)_calendarsThatAreVisible:(BOOL)arg1 ;
-(id)_deselectedCalendarIdentifiers;
-(id)initWithEventStore:(id)arg1 visibilityChangedCallback:(/*^block*/id)arg2 ;
-(NSArray *)visibleCalendars;
-(NSArray *)invisibleCalendars;
-(void)setInvisibleCalendars:(NSArray *)arg1 ;
@end

