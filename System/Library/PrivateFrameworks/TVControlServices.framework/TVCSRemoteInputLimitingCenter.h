/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSRemoteInputLimiting.h>

@class NSXPCConnection, NSString;

@interface TVCSRemoteInputLimitingCenter : NSObject <TVCSRemoteInputLimiting> {

	BOOL _applicationActive;
	BOOL _viewServiceActive;
	NSXPCConnection* _connection;
	long long _limitCount;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long limitCount;                                           //@synthesize limitCount=_limitCount - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;              //@synthesize applicationActive=_applicationActive - In the implementation block
@property (assign,getter=isViewServiceActive,nonatomic) BOOL viewServiceActive;              //@synthesize viewServiceActive=_viewServiceActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(long long)limitCount;
-(void)setLimitCount:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)_isActive;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)_server;
-(void)setViewServiceActive:(BOOL)arg1 ;
-(void)endLimitingRemoteInput;
-(void)beginLimitingRemoteInput;
-(BOOL)isViewServiceActive;
-(BOOL)isApplicationActive;
-(BOOL)_isActiveWithApplicationActivity:(BOOL)arg1 viewServiceActivity:(BOOL)arg2 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(void)_willResignActive;
-(void)_didBecomeActive;
@end

