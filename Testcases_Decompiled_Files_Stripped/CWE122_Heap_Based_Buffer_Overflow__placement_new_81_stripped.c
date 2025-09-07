
undefined8 FUN_00101c2f(void)

{
  return 0;
}




void FUN_00101cd1(void)

{
  return;
}




void FUN_00101ce7(void)

{
  return;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_001017cd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001013ca(undefined8 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101424(8,param_2);
  *puVar1 = 5;
  puVar1[1] = 10;
  FUN_001017a5(*puVar1);
  free(param_2);
  return;
}




void FUN_00101823(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f19(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e7d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c8f(void)

{
  return;
}




void FUN_0010174d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018cf(undefined4 param_1)

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




int FUN_00101c3e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f28)();
  return;
}




void FUN_00101ca5(void)

{
  return;
}




undefined8 FUN_00101ea0(undefined8 *param_1)

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




undefined8 FUN_00101424(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101589(void)

{
  long in_FS_OFFSET;
  undefined **local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = malloc(4);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_28 = malloc(8);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_38 = &PTR_FUN_00105c78;
  local_18 = &local_38;
  local_20 = local_28;
  (*(code *)PTR_FUN_00105c78)(local_18,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c6e(void)

{
  return;
}




void FUN_00101d08(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106018 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101310();
    DAT_00106018 = 1;
    return;
  }
  return;
}




void FUN_001019aa(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001016d3(void)

{
  FUN_00101589();
  FUN_0010162e();
  return;
}




void FUN_00101cb0(void)

{
  return;
}




void FUN_00101929(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001018a4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010184e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cfd(void)

{
  return;
}




void FUN_00101f57(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101773(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010197c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cbb(void)

{
  return;
}




void FUN_00101cdc(void)

{
  return;
}




void FUN_001017f9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101b41(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001032a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c63(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010162e(void)

{
  long in_FS_OFFSET;
  undefined **local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = malloc(4);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_28 = malloc(8);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_20 = local_30;
  local_38 = &PTR_FUN_00105c90;
  local_18 = &local_38;
  (*(code *)PTR_FUN_00105c90)(local_18,local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014e4(void)

{
  long in_FS_OFFSET;
  undefined **local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = malloc(4);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_28 = malloc(8);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_20 = local_30;
  local_38 = &PTR_FUN_00105ca8;
  local_18 = &local_38;
  (*(code *)PTR_FUN_00105ca8)(local_18,local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017a5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cc6(void)

{
  return;
}




bool FUN_00101e22(pthread_t *param_1)

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




void FUN_00101d13(void)

{
  return;
}




void FUN_001019dd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c20(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101c84(void)

{
  return;
}




void FUN_00101d1e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101d55(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d1e,local_18);
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




void FUN_0010148a(undefined8 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101424(8,param_2);
  *puVar1 = 5;
  puVar1[1] = 10;
  FUN_001017a5(*puVar1);
  free(param_2);
  return;
}




void FUN_00101c79(void)

{
  return;
}




void FUN_00101f38(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010143a(undefined8 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101424(4,param_2);
  *puVar1 = 5;
  FUN_001017a5(*puVar1);
  free(param_2);
  return;
}




void FUN_00102000(void)

{
  return;
}




void FUN_00101c58(void)

{
  return;
}




undefined8 FUN_001016e8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010174d("Calling good()...");
  FUN_001016d3();
  FUN_0010174d("Finished good()");
  FUN_0010174d("Calling bad()...");
  FUN_001014e4();
  FUN_0010174d("Finished bad()");
  return 0;
}




void FUN_00101951(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101a3d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010329c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101879(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c9a(void)

{
  return;
}



