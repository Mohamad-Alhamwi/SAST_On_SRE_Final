
bool FUN_00101e0a(pthread_t *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101614(void)

{
  FUN_00101519();
  FUN_0010158d();
  return;
}




void FUN_00101c82(void)

{
  return;
}




void FUN_0010180b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101519(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(100);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001016da(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101cda(void)

{
  return;
}




undefined8 FUN_00101c17(void)

{
  return 0;
}




ulong FUN_00101a25(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102290,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c77(void)

{
  return;
}




void FUN_00101d06(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018b7(undefined4 param_1)

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




void FUN_0010158d(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  puVar2 = (undefined8 *)operator_new(8);
  FUN_00101708(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101fe0(void)

{
  return;
}




void FUN_00101cb9(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101939(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c61(void)

{
  return;
}




void FUN_00101c40(void)

{
  return;
}




void FUN_001017e1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101b29(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102298,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ce5(void)

{
  return;
}




void FUN_001016ac(undefined8 *param_1)

{
  FUN_0010168e(param_1);
  *param_1 = &PTR_FUN_00104c78;
  return;
}




void FUN_00101c56(void)

{
  return;
}




undefined8 FUN_00101e88(undefined8 *param_1)

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




void FUN_00101f20(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cc4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_0010168e(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104ce8;
  return;
}




void FUN_00101c98(void)

{
  return;
}




void FUN_00101c8d(void)

{
  return;
}




void FUN_00101f3f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cf0(void)

{
  return;
}




void FUN_00101f01(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101cae(void)

{
  return;
}




undefined8 FUN_00101c08(void)

{
  return 1;
}




void FUN_00101ca3(void)

{
  return;
}




void FUN_001019c5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001017b5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101492(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001016ac(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




undefined8 FUN_00101d3d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d06,local_18);
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




void FUN_0010178d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101836(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c4b(void)

{
  return;
}




undefined8 FUN_00101e65(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010142a(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}




void FUN_00101861(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101629(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101735("Calling good()...");
  FUN_00101614();
  FUN_00101735("Finished good()");
  FUN_00101735("Calling bad()...");
  FUN_00101492();
  FUN_00101735("Finished bad()");
  return 0;
}




void FUN_00101454(void)

{
  return;
}




void FUN_00101468(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}




void FUN_001016da(undefined8 *param_1)

{
  FUN_0010168e(param_1);
  *param_1 = &PTR_FUN_00104c48;
  return;
}




void FUN_0010188c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c6c(void)

{
  return;
}




void FUN_00101708(undefined8 *param_1)

{
  FUN_0010168e(param_1);
  *param_1 = &PTR_FUN_00104c60;
  return;
}




void FUN_00101ccf(void)

{
  return;
}




void FUN_00101992(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101911(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cfb(void)

{
  return;
}




void FUN_00101735(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101964(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




int FUN_00101c26(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010175b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



