
void FUN_001018c9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101fa0(void)

{
  return;
}




void FUN_00101ef7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101bcf(void)

{
  return 0;
}




void FUN_00101c92(void)

{
  return;
}




void FUN_001017c3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101dc2(pthread_t *param_1)

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




undefined8 FUN_00101cf5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cbe,local_18);
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




void FUN_0010186f(undefined4 param_1)

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




void FUN_00101ca8(void)

{
  return;
}




void FUN_00101bf8(void)

{
  return;
}




int FUN_00101bde(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010167e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016ed("Calling good()...");
  FUN_00101669();
  FUN_001016ed("Finished good()");
  FUN_001016ed("Calling bad()...");
  FUN_001013e9();
  FUN_001016ed("Finished bad()");
  return 0;
}




void FUN_0010176d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018f1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c24(void)

{
  return;
}




void FUN_00101c66(void)

{
  return;
}




undefined8 FUN_00101e40(undefined8 *param_1)

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




void FUN_00101c7c(void)

{
  return;
}




void FUN_00101c45(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101cb3(void)

{
  return;
}




void FUN_00101c3a(void)

{
  return;
}




undefined8 FUN_00101e1d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101eb9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001013e9(void)

{
  char *pcVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014a8;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = (char *)((long)local_98 + -8);
  local_88 = local_90;
  local_80 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014f1;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101508;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101514;
  FUN_001016ed(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101529;
  __stack_chk_fail();
}




void FUN_00101c03(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101bc0(void)

{
  return 1;
}




void FUN_00101c50(void)

{
  return;
}




void FUN_001016ed(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_001019dd(long param_1,ulong param_2,long param_3)

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




void FUN_0010197d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101c71(void)

{
  return;
}




void FUN_00101713(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c0e(void)

{
  return;
}




void FUN_00101669(void)

{
  FUN_0010152b();
  return;
}




void FUN_00101745(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101799(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010194a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c9d(void)

{
  return;
}




void FUN_00101c2f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101f30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101cbe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010152b(void)

{
  char *pcVar1;
  char **ppcVar2;
  long in_FS_OFFSET;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar2 = &local_98; ppcVar2 != &local_98; ppcVar2 = (char **)((long)ppcVar2 + -0x1000)) {
    *(undefined8 *)((long)ppcVar2 + -8) = *(undefined8 *)((long)ppcVar2 + -8);
  }
  *(undefined8 *)((long)ppcVar2 + -8) = *(undefined8 *)((long)ppcVar2 + -8);
  local_98 = (char *)((ulong)((long)ppcVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015ea;
  memset((char *)((ulong)((long)ppcVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_98[99] = '\0';
  local_90 = local_98;
  local_88 = local_98;
  local_80 = local_98;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x10162f;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x101646;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x101652;
  FUN_001016ed(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x101667;
  __stack_chk_fail();
}




void FUN_00101819(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c87(void)

{
  return;
}




void FUN_00101c19(void)

{
  return;
}




void FUN_0010191c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101ae1(long param_1,ulong param_2,long param_3)

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




void FUN_001017ee(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101844(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c5b(void)

{
  return;
}



