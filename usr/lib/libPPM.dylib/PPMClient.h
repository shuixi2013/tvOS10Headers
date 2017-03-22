/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libPPM.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOKitUserClientInterface, NSString;

@interface PPMClient : NSObject {

	unsigned connect;
	unsigned version;
	IOKitUserClientInterface* userClient;
	NSString* identifier;

}

@property (retain) IOKitUserClientInterface * userClient; 
@property (assign) unsigned connect; 
@property (retain) NSString * identifier; 
@property (assign) unsigned version; 
+(id)sharedInstanceWithClientRepresentation:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sharedInstanceWithClientRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)connect;
-(BOOL)endInteraction:(id*)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)setupIOKitUserClientWith:(id)arg1 error:(id*)arg2 ;
-(void)setUserClient:(IOKitUserClientInterface *)arg1 ;
-(void)setupClientNumbers;
-(int)getClientNumber:(id)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)registerForNotificationsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)initWithClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)admissionCheckWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)activityStoppedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)activityStartedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBudgetWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPendingWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDebugFlagWithValue:(id)arg1 error:(id*)arg2 ;
-(IOKitUserClientInterface *)userClient;
@end

