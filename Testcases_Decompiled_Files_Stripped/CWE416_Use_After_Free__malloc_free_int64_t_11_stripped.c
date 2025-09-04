
void FUN_00101d0c(void)

{
  return;
}




void FUN_0010198b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101782(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101466(void)

{
  int iVar1;
  void *__ptr;
  ulong local_18;
  
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
    }
    free(__ptr);
  }
  iVar1 = FUN_00101c3e();
  if (iVar1 != 0) {
    FUN_0010175c("Benign, fixed string");
  }
  return;
}




void FUN_001017b4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101500(void)

{
  int iVar1;
  void *__ptr;
  undefined8 local_18;
  
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
    }
    free(__ptr);
  }
  FUN_00101c2f();
  return;
}




void FUN_00101f28(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101cd5(void)

{
  return;
}




void FUN_00101888(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d01(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101f66(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f47(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c93(void)

{
  return;
}




void FUN_00101808(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cbf(void)

{
  return;
}




void FUN_00101d17(void)

{
  return;
}




undefined8 FUN_001016ed(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010175c("Calling good()...");
  FUN_001016ba();
  FUN_0010175c("Finished good()");
  FUN_0010175c("Calling bad()...");
  FUN_001013c9();
  FUN_0010175c("Finished bad()");
  return 0;
}




void FUN_00101c67(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_001016ba(void)

{
  FUN_00101466();
  FUN_00101500();
  FUN_0010158a();
  FUN_00101629();
  return;
}




void FUN_00101c72(void)

{
  return;
}




void FUN_00101fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101c4d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101629(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
  }
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    FUN_0010185d(*local_18);
  }
  return;
}




undefined8 FUN_00101eaf(undefined8 *param_1)

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




void FUN_00101c9e(void)

{
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




bool FUN_00101e31(pthread_t *param_1)

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




void FUN_0010185d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d64(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d2d,local_18);
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




ulong FUN_00101b50(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ca9(void)

{
  return;
}




void FUN_001018de(undefined4 param_1)

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




void FUN_00102010(void)

{
  return;
}




void FUN_00101938(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101960(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001019b9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c88(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




ulong FUN_00101a4c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cb4(void)

{
  return;
}




void FUN_001019ec(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101cca(void)

{
  return;
}




void FUN_00101d2d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101e8c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010175c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101c3e(void)

{
  return 0;
}




void FUN_001013c9(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
    free(local_18);
  }
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    FUN_0010185d(*local_18);
  }
  return;
}




undefined8 FUN_00101c2f(void)

{
  return 1;
}




void FUN_00101c7d(void)

{
  return;
}




void FUN_00101832(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018b3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ceb(void)

{
  return;
}




void FUN_001017dc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d22(void)

{
  return;
}




void FUN_0010158a(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_00101c3e();
  if (iVar1 == 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
  }
  else {
    FUN_0010175c("Benign, fixed string");
  }
  iVar1 = FUN_00101c2f();
  if (iVar1 != 0) {
    FUN_0010185d(*local_18);
  }
  return;
}




void FUN_00101ce0(void)

{
  return;
}




void FUN_00101cf6(void)

{
  return;
}



