
void FUN_00101915(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c28(void)

{
  return;
}




void FUN_00101c3e(void)

{
  return;
}




void FUN_00101c49(void)

{
  return;
}




void FUN_001015d5(void)

{
  undefined4 *puVar1;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  if (DAT_00104010 != 0) {
    local_24 = 0x14;
  }
  puVar1 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_0010173e(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




undefined8 FUN_00101681(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016e6("Calling good()...");
  FUN_0010166c();
  FUN_001016e6("Finished good()");
  FUN_001016e6("Calling bad()...");
  FUN_00101429();
  FUN_001016e6("Finished bad()");
  return 0;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_00101c96(void)

{
  return;
}




int FUN_00101bd7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101370();
    DAT_00104028 = 1;
    return;
  }
  return;
}




void FUN_00101766(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101943(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bfc(void)

{
  return;
}




void FUN_00101ca1(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




ulong FUN_00101ada(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c5f(void)

{
  return;
}




void FUN_00101812(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f90(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101c07(void)

{
  return;
}




void FUN_00101792(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010173e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




bool FUN_00101dbb(pthread_t *param_1)

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




void FUN_001016e6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c54(void)

{
  return;
}




undefined8 FUN_00101cee(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cb7,local_18);
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




void FUN_00101429(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  int local_3c;
  ulong local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  if (DAT_00104010 != 0) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar1 = fgets(local_1e,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_001016e6("fgets() failed.");
    }
    else {
      local_3c = atoi(local_1e);
    }
  }
  puVar2 = (undefined4 *)operator_new__((long)local_3c << 2);
  for (local_38 = 0; local_38 < (ulong)(long)local_3c; local_38 = local_38 + 1) {
    puVar2[local_38] = 0;
  }
  FUN_0010173e(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017e7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c12(void)

{
  return;
}




void FUN_00101c33(void)

{
  return;
}




void FUN_0010166c(void)

{
  FUN_00101530();
  FUN_001015d5();
  return;
}




void FUN_001018c2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_001019d6(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101530(void)

{
  undefined4 *puVar1;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  if (DAT_00104030 == 0) {
    local_24 = 0x14;
  }
  else {
    FUN_001016e6("Benign, fixed string");
  }
  puVar1 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_0010173e(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_00101f20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c1d(void)

{
  return;
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_00101ef0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_0010183d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018ea(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101bc8(void)

{
  return 0;
}




void FUN_00101c75(void)

{
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_00101cb7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101bb9(void)

{
  return 1;
}




undefined8 FUN_00101e16(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101e39(undefined8 *param_1)

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




void FUN_00101976(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_001017bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101868(undefined4 param_1)

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




void FUN_00101eb2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010170c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ed1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bf1(void)

{
  return;
}



