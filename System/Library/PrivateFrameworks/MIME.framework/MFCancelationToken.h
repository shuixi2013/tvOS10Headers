/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFCancelable.h>
#import <libobjc.A.dylib/MFCancelationToken.h>

@protocol MFCancelationToken <NSObject>
@property (getter=isCanceled,readonly) BOOL canceled; 
@required
-(BOOL)isCanceled;

@end


@class NSLock, NSMutableArray, NSString;

@interface MFCancelationToken : NSObject <MFCancelable, MFCancelationToken> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isCanceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,readonly) BOOL canceled; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(BOOL)isCanceled;
-(id)_nts_cancel;
-(void)addCancelable:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
@end

