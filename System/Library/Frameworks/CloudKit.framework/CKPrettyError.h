/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface CKPrettyError : NSError
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3 ;
+(id)itemErrorFromError:(id)arg1 forID:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)_errorDomain;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6 ;
+(id)dictionaryRepresentationForError:(id)arg1 ;
+(id)errorWithDictionaryRepresentation:(id)arg1 ;
+(id)secureCodableError:(id)arg1 ;
+(id)descriptionForError:(id)arg1 paths:(BOOL)arg2 ;
+(id)descriptionForError:(id)arg1 ;
+(BOOL)isError:(id)arg1 withCode:(long long)arg2 ;
+(BOOL)isError:(id)arg1 withCodes:(id)arg2 ;
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)CKPartialErrorDescription;
@end

