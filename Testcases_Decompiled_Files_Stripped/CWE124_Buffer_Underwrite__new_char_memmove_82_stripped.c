
undefined8 FUN_00101ead(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




void FUN_00102030(void)

{
  return;
}




void FUN_0010168f(void)

{
  FUN_001015f2();
  return;
}




void FUN_00101cd5(void)

{
  return;
}




void FUN_0010187e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101551(void)

{
  void *__s;
  undefined8 *puVar1;
  
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101722(puVar1);
  (**(code **)*puVar1)(puVar1,(long)__s + -8);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00101d2d(void)

{
  return;
}




int FUN_00101c6e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00101b71(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010321c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cca(void)

{
  return;
}




undefined8 FUN_00101d85(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d4e,local_18);
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




void FUN_00101959(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001015f2(void)

{
  void *__s;
  undefined8 *puVar1;
  
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101750(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00101d0c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_001019ac(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cb4(void)

{
  return;
}




void FUN_00101c93(void)

{
  return;
}




void FUN_00101853(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101c50(void)

{
  return 1;
}




void FUN_00101d38(void)

{
  return;
}




void FUN_00101722(undefined8 *param_1)

{
  FUN_00101704(param_1);
  *param_1 = &PTR_FUN_00104c70;
  return;
}




void FUN_00101ca9(void)

{
  return;
}




void FUN_00101f49(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f87(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d17(void)

{
  return;
}




void FUN_00101704(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104ce0;
  return;
}




void FUN_00101ceb(void)

{
  return;
}




void FUN_00101ce0(void)

{
  return;
}




void FUN_00101fc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d43(void)

{
  return;
}




void FUN_00101f68(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d01(void)

{
  return;
}




undefined8 FUN_00101c5f(void)

{
  return 0;
}




void FUN_00101cf6(void)

{
  return;
}




ulong FUN_00101a6d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103214,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101829(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001014ce(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_0010177d(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00101e52(pthread_t *param_1)

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




void FUN_001017fd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018a9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c9e(void)

{
  return;
}




undefined8 FUN_00101ed0(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_001018d4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010169f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010177d("Calling good()...");
  FUN_0010168f();
  FUN_0010177d("Finished good()");
  FUN_0010177d("Calling bad()...");
  FUN_00101551();
  FUN_0010177d("Finished bad()");
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101390();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_0010144a(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_0010177d(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101750(undefined8 *param_1)

{
  FUN_00101704(param_1);
  *param_1 = &PTR_FUN_00104c88;
  return;
}




void FUN_001018ff(undefined4 param_1)

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




void FUN_00101cbf(void)

{
  return;
}




void FUN_0010177d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d22(void)

{
  return;
}




void FUN_00101a0d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101981(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d4e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017a3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001019da(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c88(void)

{
  return;
}




void FUN_001017d5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



