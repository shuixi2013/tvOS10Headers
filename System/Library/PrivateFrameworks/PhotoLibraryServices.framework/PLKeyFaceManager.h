/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSOperationQueue;

@interface PLKeyFaceManager : NSObject {

	NSMutableDictionary* _operationsByPersonUUID;
	NSLock* _dictionaryLock;
	NSOperationQueue* _operationQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)makeOperationForPersonUUID:(id)arg1 ;
-(void)operationDidCompletion:(id)arg1 ;
-(void)markPersonAsNeedingKeyFace:(id)arg1 ;
@end

