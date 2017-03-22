/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CalFileSensor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	BOOL _started;
	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL started;                        //@synthesize started=_started - In the implementation block
@property (nonatomic,copy,readonly) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)path;
-(void)stop;
-(void)start;
-(id)initWithPath:(id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(BOOL)started;
-(id)eventBlock;
@end

