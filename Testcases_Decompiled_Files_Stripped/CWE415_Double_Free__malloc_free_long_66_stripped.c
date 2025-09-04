
void FUN_00101728(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101528(void)

{
  FUN_00101442();
  FUN_001014af();
  return;
}




void FUN_001017a9(undefined4 param_1)

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




void FUN_00101b32(void)

{
  return;
}




void FUN_00101b5e(void)

{
  return;
}




void FUN_00101856(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001016d3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101d7a(undefined8 *param_1)

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




void FUN_001013c9(void)

{
  long in_FS_OFFSET;
  undefined local_38 [16];
  void *local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_28);
  FUN_001015b6(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010167f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101b09(void)

{
  return 0;
}




void FUN_00101e12(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101bf8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101442(void)

{
  long in_FS_OFFSET;
  undefined local_38 [16];
  void *local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_001015e1(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bcc(void)

{
  return;
}




void FUN_001014af(void)

{
  long in_FS_OFFSET;
  undefined local_38 [16];
  void *local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_28);
  FUN_0010160c(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101884(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015e1(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00101753(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101bd7(void)

{
  return;
}




void FUN_00101bc1(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101b48(void)

{
  return;
}




void FUN_00101b3d(void)

{
  return;
}




void FUN_0010160c(void)

{
  return;
}




void FUN_00101803(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001015b6(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}




int FUN_00101b18(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101c2f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bf8,local_18);
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




void FUN_00101ba0(void)

{
  return;
}




void FUN_0010177e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001016fd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b7f(void)

{
  return;
}




void FUN_00101b69(void)

{
  return;
}




void FUN_00101b74(void)

{
  return;
}




bool FUN_00101cfc(pthread_t *param_1)

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




void FUN_0010182b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101547(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101627("Calling good()...");
  FUN_00101528();
  FUN_00101627("Finished good()");
  FUN_00101627("Calling bad()...");
  FUN_001013c9();
  FUN_00101627("Finished bad()");
  return 0;
}




void FUN_00101bed(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101b53(void)

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




ulong FUN_00101a1b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d57(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101ed0(void)

{
  return;
}




void FUN_00101df3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001018b7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001016a7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bab(void)

{
  return;
}




void FUN_00101bb6(void)

{
  return;
}




void FUN_0010164d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101be2(void)

{
  return;
}




void FUN_00101b8a(void)

{
  return;
}




void FUN_00101e31(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101627(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00101917(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101afa(void)

{
  return 1;
}




void FUN_00101b95(void)

{
  return;
}



