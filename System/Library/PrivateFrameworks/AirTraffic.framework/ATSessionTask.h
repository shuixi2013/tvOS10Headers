/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRunning;
-(void)_start;
-(void)setProgress:(double)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(double)progress;
-(NSDictionary *)properties;
-(BOOL)isFinished;
-(ATSession *)session;
-(void)setSession:(ATSession *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(unsigned long long)totalItemCount;
-(NSArray *)currentItems;
-(NSString *)sessionTaskIdentifier;
-(id)baseClassRepresentation;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(NSArray *)currentItemDescriptions;
-(NSString *)sessionGroupingKey;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(unsigned long long)completedItemCount;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
@end

