/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,retain) CKDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
@end

