
void FUN_00101b47(void)

{
  return;
}




void FUN_00101560(void)

{
  undefined8 *__ptr;
  
  DAT_00104024 = 1;
  __ptr = (undefined8 *)FUN_00101511(0);
  FUN_0010186b(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101b9f(void)

{
  return;
}




void FUN_00101e27(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




ulong FUN_0010192c(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_001013c9(undefined8 *param_1)

{
  undefined8 local_10;
  
  local_10 = param_1;
  if (DAT_0010401c != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = DAT_00102060;
  }
  return local_10;
}




int FUN_00101b2d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00101bb5(void)

{
  return;
}




void FUN_00101baa(void)

{
  return;
}




void FUN_001017be(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101899(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b52(void)

{
  return;
}




void FUN_00101be1(void)

{
  return;
}




bool FUN_00101d11(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00101d8f(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00101c02(void)

{
  return;
}




void FUN_00101712(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ef0(void)

{
  return;
}




void FUN_00101bf7(void)

{
  return;
}




void FUN_0010173d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bc0(void)

{
  return;
}




void FUN_001016e8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b94(void)

{
  return;
}




void FUN_00101c0d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101818(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b7e(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101b73(void)

{
  return;
}




void FUN_00101662(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101d6c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101840(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00101466(undefined8 *param_1)

{
  undefined8 *local_10;
  
  if (DAT_00104020 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = DAT_00102060;
  }
  else {
    FUN_0010163c("Benign, fixed string");
    local_10 = param_1;
  }
  return local_10;
}




void FUN_00101bcb(void)

{
  return;
}




void FUN_001014c3(void)

{
  undefined8 *__ptr;
  
  DAT_00104020 = 0;
  __ptr = (undefined8 *)FUN_00101466(0);
  FUN_0010186b(*__ptr);
  free(__ptr);
  return;
}




undefined8 * FUN_00101511(undefined8 *param_1)

{
  undefined8 local_10;
  
  local_10 = param_1;
  if (DAT_00104024 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = DAT_00102060;
  }
  return local_10;
}




void FUN_001015ae(void)

{
  FUN_001014c3();
  FUN_00101560();
  return;
}




void FUN_00101793(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010163c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010186b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001018cc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001015cd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010163c("Calling good()...");
  FUN_001015ae();
  FUN_0010163c("Finished good()");
  FUN_0010163c("Calling bad()...");
  FUN_00101418();
  FUN_0010163c("Finished bad()");
  return 0;
}




void FUN_00101b68(void)

{
  return;
}




void FUN_00101e46(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101bec(void)

{
  return;
}




void FUN_001016bc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101694(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101768(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101418(void)

{
  undefined8 *__ptr;
  
  DAT_0010401c = 1;
  __ptr = (undefined8 *)FUN_001013c9(0);
  FUN_0010186b(*__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101b0f(void)

{
  return 1;
}




void FUN_00101e08(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101bd6(void)

{
  return;
}




void FUN_00101b5d(void)

{
  return;
}




void FUN_00101b89(void)

{
  return;
}




ulong FUN_00101a30(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b1e(void)

{
  return 0;
}




undefined8 FUN_00101c44(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c0d,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



