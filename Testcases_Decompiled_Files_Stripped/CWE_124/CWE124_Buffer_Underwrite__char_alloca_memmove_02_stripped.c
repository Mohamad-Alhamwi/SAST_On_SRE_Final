
void FUN_00101978(undefined4 param_1)

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




void FUN_00102030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fe1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101cc9(void)

{
  return 1;
}




void FUN_00101d90(void)

{
  return;
}




void FUN_001018a2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101dfe(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dc7,local_18);
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




void FUN_00101dc7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010194d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101da6(void)

{
  return;
}




int FUN_00101ce7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101cd8(void)

{
  return 0;
}




void FUN_00101768(void)

{
  FUN_00101516();
  FUN_0010163f();
  return;
}




void FUN_0010184e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019d2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d22(void)

{
  return;
}




void FUN_00101d64(void)

{
  return;
}




undefined8 FUN_00101f26(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d7a(void)

{
  return;
}




void FUN_001020a0(void)

{
  return;
}




void FUN_00101d43(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101db1(void)

{
  return;
}




void FUN_00101d38(void)

{
  return;
}




bool FUN_00101ecb(pthread_t *param_1)

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




undefined8 FUN_00101f49(undefined8 *param_1)

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




void FUN_001013e9(void)

{
  void *pvVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_88;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_88; ppvVar2 != &local_88; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_88 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10149f;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_88 + 99) = 0;
  local_80 = (void *)((long)local_88 + -8);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014cc;
  memset(local_78,0x43,99);
  pvVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014e8;
  memmove(pvVar1,local_78,100);
  pvVar1 = local_80;
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014ff;
  FUN_001017f6(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101514;
  __stack_chk_fail();
}




void FUN_00101d01(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




ulong FUN_00101bea(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d4e(void)

{
  return;
}




undefined8 FUN_00101787(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017f6("Calling good()...");
  FUN_00101768();
  FUN_001017f6("Finished good()");
  FUN_001017f6("Calling bad()...");
  FUN_001013e9();
  FUN_001017f6("Finished bad()");
  return 0;
}




void FUN_00101a86(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101a53(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101d6f(void)

{
  return;
}




void FUN_001017f6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d0c(void)

{
  return;
}




void FUN_0010163f(void)

{
  void *pvVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_88;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_88; ppvVar2 != &local_88; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_88 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1016f5;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_88 + 99) = 0;
  local_80 = local_88;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10171e;
  memset(local_78,0x43,99);
  pvVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10173a;
  memmove(pvVar1,local_78,100);
  pvVar1 = local_80;
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101751;
  FUN_001017f6(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101766;
  __stack_chk_fail();
}




void FUN_0010181c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101876(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a25(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d9b(void)

{
  return;
}




void FUN_00101d2d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00102000(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101dbc(void)

{
  return;
}




void FUN_00101fc2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101516(void)

{
  void *pvVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_88;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_88; ppvVar2 != &local_88; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_88 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1015cc;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_88 + 99) = 0;
  local_80 = local_88;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1015f5;
  memset(local_78,0x43,99);
  pvVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101611;
  memmove(pvVar1,local_78,100);
  pvVar1 = local_80;
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101628;
  FUN_001017f6(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10163d;
  __stack_chk_fail();
}




void FUN_001018f7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d85(void)

{
  return;
}




void FUN_00101d17(void)

{
  return;
}




void FUN_001019fa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101ae6(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018cc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101922(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d59(void)

{
  return;
}



