
void FUN_0010196b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001019ec(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cfd(void)

{
  return;
}




undefined8 FUN_00101ebf(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f5b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c9a(void)

{
  return;
}




void FUN_001013e9(void)

{
  int iVar1;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    local_18 = operator_new__(800);
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 2;
    }
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
  }
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    FUN_001019ec(local_18);
  }
  return;
}




void FUN_00101f99(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cd1(void)

{
  return;
}




void FUN_00101d60(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010178f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101c62(void)

{
  return 1;
}




void FUN_001017e7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_00101a1f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101675(void)

{
  int iVar1;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    local_18 = operator_new__(800);
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 2;
    }
  }
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    FUN_001019ec(local_18);
  }
  return;
}




ulong FUN_00101b83(long param_1,ulong param_2,long param_3)

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




void FUN_00101d08(void)

{
  return;
}




void FUN_00101d34(void)

{
  return;
}




void FUN_00101cdc(void)

{
  return;
}




void FUN_00101cb0(void)

{
  return;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_0010180f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101492(void)

{
  int iVar1;
  void *pvVar2;
  ulong local_18;
  
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(800);
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined4 *)((long)pvVar2 + local_18 * 8) = 1;
      *(undefined4 *)((long)pvVar2 + local_18 * 8 + 4) = 2;
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  iVar1 = FUN_00101c71();
  if (iVar1 != 0) {
    FUN_0010178f("Benign, fixed string");
  }
  return;
}




void FUN_00101d4a(void)

{
  return;
}




void FUN_00101fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101a7f(long param_1,ulong param_2,long param_3)

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




void FUN_00101865(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f7a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001018e6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101c71(void)

{
  return 0;
}




void FUN_00101890(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101993(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d97(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d60,local_18);
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




void FUN_0010153b(void)

{
  int iVar1;
  void *pvVar2;
  ulong local_18;
  
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(800);
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined4 *)((long)pvVar2 + local_18 * 8) = 1;
      *(undefined4 *)((long)pvVar2 + local_18 * 8 + 4) = 2;
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  FUN_00101c62();
  return;
}




void FUN_0010170b(void)

{
  FUN_00101492();
  FUN_0010153b();
  FUN_001015d1();
  FUN_00101675();
  return;
}




undefined8 FUN_00101ee2(undefined8 *param_1)

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




void FUN_00101ca5(void)

{
  return;
}




void FUN_00101d3f(void)

{
  return;
}




void FUN_00101d29(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




bool FUN_00101e64(pthread_t *param_1)

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




void FUN_001019be(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010183b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010172a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010178f("Calling good()...");
  FUN_0010170b();
  FUN_0010178f("Finished good()");
  FUN_0010178f("Calling bad()...");
  FUN_001013e9();
  FUN_0010178f("Finished bad()");
  return 0;
}




void FUN_00101911(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101ce7(void)

{
  return;
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_00101d13(void)

{
  return;
}




void FUN_00101d55(void)

{
  return;
}




void FUN_00101cbb(void)

{
  return;
}




int FUN_00101c80(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001015d1(void)

{
  int iVar1;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  iVar1 = FUN_00101c71();
  if (iVar1 == 0) {
    local_18 = operator_new__(800);
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 2;
    }
  }
  else {
    FUN_0010178f("Benign, fixed string");
  }
  iVar1 = FUN_00101c62();
  if (iVar1 != 0) {
    FUN_001019ec(local_18);
  }
  return;
}




void FUN_001017b5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018bb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}



