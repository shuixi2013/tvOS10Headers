/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/_FBSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _FBSqliteDeferredPreparedSimpleStatement : _FBSqlitePreparedSimpleStatement {

	NSString* _deferredSql;

}
-(void)dealloc;
-(id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

