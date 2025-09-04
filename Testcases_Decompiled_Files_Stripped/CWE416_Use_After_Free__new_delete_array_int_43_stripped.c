
/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101ba5(void)

{
  return;
}




void FUN_00101bc6(void)

{
  return;
}




void FUN_00101459(void)

{
  long in_FS_OFFSET;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (undefined4 *)0x0;
  FUN_001013e9(&local_18);
  FUN_001016dc(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101db4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c13(void)

{
  return;
}




void FUN_0010175a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010161f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101684("Calling good()...");
  FUN_0010160a();
  FUN_00101684("Finished good()");
  FUN_00101684("Calling bad()...");
  FUN_00101459();
  FUN_00101684("Finished bad()");
  return 0;
}




void FUN_00101c4a(void)

{
  return;
}




void FUN_001018b3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101bf2(void)

{
  return;
}




void FUN_00101914(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c3f(void)

{
  return;
}




void FUN_001015c4(void)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  FUN_00101554(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010160a(void)

{
  FUN_00101501();
  FUN_001015c4();
  return;
}




void FUN_00101501(void)

{
  long in_FS_OFFSET;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (undefined4 *)0x0;
  FUN_001014ac(&local_18);
  FUN_001016dc(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bd1(void)

{
  return;
}




void FUN_00101806(undefined4 param_1)

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




void FUN_00101be7(void)

{
  return;
}




undefined8 FUN_00101dd7(undefined8 *param_1)

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




void FUN_001013e9(long *param_1)

{
  void *pvVar1;
  undefined8 local_10;
  
  pvVar1 = operator_new__(400);
  *param_1 = (long)pvVar1;
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    *(undefined4 *)(*param_1 + local_10 * 4) = 5;
  }
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  return;
}




void FUN_00101c29(void)

{
  return;
}




void FUN_00101c55(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101d59(pthread_t *param_1)

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




ulong FUN_00101974(long param_1,ulong param_2,long param_3)

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




void FUN_00101785(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001016aa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101bdc(void)

{
  return;
}




undefined8 FUN_00101b57(void)

{
  return 1;
}




void FUN_00101554(long *param_1)

{
  void *pvVar1;
  undefined8 local_10;
  
  pvVar1 = operator_new__(400);
  *param_1 = (long)pvVar1;
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    *(undefined4 *)(*param_1 + local_10 * 4) = 5;
  }
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  return;
}




void FUN_00101b8f(void)

{
  return;
}




void FUN_00101bfd(void)

{
  return;
}




void FUN_001014ac(long *param_1)

{
  void *pvVar1;
  undefined8 local_10;
  
  pvVar1 = operator_new__(400);
  *param_1 = (long)pvVar1;
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    *(undefined4 *)(*param_1 + local_10 * 4) = 5;
  }
  return;
}




undefined8 FUN_00101b66(void)

{
  return 0;
}




void FUN_00101bb0(void)

{
  return;
}




void FUN_00101ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001017b0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f30(void)

{
  return;
}




void FUN_00101860(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c1e(void)

{
  return;
}




void FUN_00101e8e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101730(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101bbb(void)

{
  return;
}




ulong FUN_00101a78(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101888(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b9a(void)

{
  return;
}




void FUN_00101704(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101c8c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c55,local_18);
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




void FUN_00101e6f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101e50(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c34(void)

{
  return;
}




void FUN_00101c08(void)

{
  return;
}




void FUN_001017db(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018e1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00101b75(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016dc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101684(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



